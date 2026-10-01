#pragma once
/* =============================================================
/*  raycast RVAs (function / vtable / global pointer addresses)
/* -------------------------------------------------------------
/*  Member field offsets live in offsets.h. Only RVAs live here.
/*  Source set : raycast manually-derived RVAs, refreshed against the
/*               jingohok dump for version-02c37bc51a384b8f.
/*               RVA::Chams and RVA::Creator hold RTTI/COL addresses
/*               that dump does not carry, so they are still stale.
/*               RVA::Raycast keeps its own descriptor pair, unresolved.
/*               (the old build's value is kept until it is re-found).
/* =============================================================
*/
#include <cstddef>
#include <cstdint>

namespace RVA {
    namespace Alloc {
        inline std::uintptr_t Free = 0x1790790;
        inline std::uintptr_t Malloc = 0x799600;
    }

    namespace Attribute {
        inline std::uintptr_t TypeIdRva = 0x8806404;
    }

    namespace Chams {
        // Field layout below is confirmed against version-02c37bc51a384b8f.
        // The RTTI type descriptors, COLs and vtable addresses in here are
        // NOT - that dump carries no RTTI section, so they are still from
        // the older build and need re-finding.
        inline constexpr bool Resolved = true;

        namespace RttiTypeDescriptors {
            inline std::uintptr_t FastClusterEntity = 0x801c0b8;
            inline std::uintptr_t RenderEntity = 0x7bace20;
        }

        namespace Confirmed {
            inline std::uintptr_t FastClusterEntityCOL = 0x73ef728;
            inline std::uintptr_t FastClusterEntityVTable = 0x6c861f8;
            inline std::uintptr_t RenderEntityCOL = 0x6f97a60;
            inline std::uintptr_t RenderEntityVTable = 0x68ccc50;
            inline std::uintptr_t FastClusterEntityObjectSize = 0x130;
            inline std::uintptr_t RenderEntityObjectSize = 0x80;
            inline std::uintptr_t RenderQueueNameTable = 0x5efbad0;
            inline std::uintptr_t OpenGLCullModeTable = 0x652d3a0;
            inline std::uintptr_t OpenGLFillModeTable = 0x652d3b0;
            inline std::uintptr_t OpenGLDepthFunctionTable = 0x652d3d8;
        }

        namespace Functions {
            inline std::uintptr_t TechniqueMoveRange = 0xf81070;
            inline std::uintptr_t TechniqueConstructor = 0xf814e0;
            inline std::uintptr_t TechniqueFind = 0xf816d0;
            inline std::uintptr_t TechniqueSetBlendState = 0xf81a10;
            inline std::uintptr_t TechniqueSetDepthState = 0xf81b30;
            inline std::uintptr_t TechniqueSetRasterizerState = 0xf81b40;
            inline std::uintptr_t RenderEntityConstructor = 0xf8fc80;
            inline std::uintptr_t RenderEntityDestructor = 0xf90060;
            inline std::uintptr_t RenderEntitySubmit = 0xf905b0;
            inline std::uintptr_t FastClusterBindingConstructor = 0x10d85e0;
            inline std::uintptr_t FastClusterEntityConstructor = 0x10d9020;
            inline std::uintptr_t FastClusterEntityDestructor = 0x10d9430;
            inline std::uintptr_t OpenGLApplyRenderStates = 0x36a2960;
        }

        namespace Fields {
            inline std::uintptr_t FastClusterEntityVTable = Confirmed::FastClusterEntityVTable;
            inline std::uintptr_t BasePartClusterSubBackref = 0x130;
            inline std::uintptr_t RenderEntityTechniqueArrayPtr = 0x70;
            inline std::uintptr_t RenderEntityRenderQueueId = 0x10;
            inline constexpr std::uint32_t RenderEntityQueueIdOpaque = 0;
            inline constexpr std::uint32_t RenderEntityQueueIdTerrain = 1;
            inline constexpr std::uint32_t RenderEntityQueueIdDecals = 2;
            inline constexpr std::uint32_t RenderEntityQueueIdOpaqueCasters = 3;
            inline constexpr std::uint32_t RenderEntityQueueIdOpaqueAdorns = 4;
            inline constexpr std::uint32_t RenderEntityQueueIdOpaqueWithAlpha = 5;
            inline constexpr std::uint32_t RenderEntityQueueIdWater = 6;
            inline constexpr std::uint32_t RenderEntityQueueIdGlassTint = 7;
            inline constexpr std::uint32_t RenderEntityQueueIdGlass = 8;
            inline constexpr std::uint32_t RenderEntityQueueIdTransparent = 9;
            inline constexpr std::uint32_t RenderEntityQueueIdTransparentCasters = 10;
            inline constexpr std::uint32_t RenderEntityQueueIdOnTopWithDepth = 11;
            inline constexpr std::uint32_t RenderEntityQueueIdOnTopReadOnlyDepth = 12;
            inline constexpr std::uint32_t RenderEntityQueueIdAlwaysOnTop = 13;
            inline constexpr std::uint32_t RenderEntityQueueIdAlwaysOnTopAdorns = 14;
            inline constexpr std::uint32_t RenderEntityQueueIdScreen = 15;
            inline constexpr std::uint32_t RenderEntityQueueIdScreenOnTopOfScene = 16;
            inline std::uintptr_t TechniqueArrayBegin = 0x00;
            inline std::uintptr_t TechniqueArrayEnd = 0x08;
            // 136 - confirmed against version-02c37bc51a384b8f.
            inline std::uintptr_t TechniqueStride = 136;

            inline std::uintptr_t TechniqueRasterizerState = 0x10;
            inline std::uintptr_t TechniqueCullMode = 0x10;
            inline std::uintptr_t TechniqueFillMode = 0x11;
            inline std::uintptr_t TechniqueDepthBias = 0x14;

            inline std::uintptr_t TechniqueDepthState = 0x18;
            inline std::uintptr_t TechniqueDepthFunction = 0x18;
            inline std::uintptr_t TechniqueDepthWrite = 0x19;
            inline std::uintptr_t TechniqueStencilMode = 0x1a;

            inline std::uintptr_t TechniqueBlendState = 0x1c;
            inline std::uintptr_t TechniqueBlendColorMask = 0x1c;
            inline std::uintptr_t TechniqueBlendColorSource = 0x20;
            inline std::uintptr_t TechniqueBlendColorDestination = 0x21;
            inline std::uintptr_t TechniqueBlendAlphaSource = 0x22;
            inline std::uintptr_t TechniqueBlendAlphaDestination = 0x23;
            inline std::uintptr_t TechniqueBlendAlphaToCoverage = 0x24;

            inline constexpr std::uint8_t TechniqueCullModeNone = 0;
            inline constexpr std::uint8_t TechniqueCullModeBack = 1;
            inline constexpr std::uint8_t TechniqueCullModeFront = 2;
            inline constexpr std::uint8_t TechniqueStageCullModeFront = TechniqueCullModeFront;
            inline constexpr std::uint8_t TechniqueFillModeSolid = 0;
            inline constexpr std::uint8_t TechniqueFillModeWireframe = 1;
            inline constexpr std::uint8_t TechniqueDepthFunctionAlways = 0;
            inline constexpr std::uint8_t TechniqueDepthFunctionLess = 1;
            inline constexpr std::uint8_t TechniqueDepthFunctionLessEqual = 2;
            inline constexpr std::uint8_t TechniqueDepthFunctionGreater = 3;
            inline constexpr std::uint8_t TechniqueDepthFunctionGreaterEqual = 4;
            inline constexpr std::uint8_t TechniqueDepthFunctionEqual = 5;
            inline constexpr std::uint8_t TechniqueDepthFunctionNotEqual = 6;
            inline constexpr std::uint32_t TechniqueBlendColorMaskAll = 0x0f;

            inline std::uintptr_t MaterialLayerStride = TechniqueStride;
            inline std::uintptr_t MaterialLayerCullMode = TechniqueCullMode;
            inline std::uintptr_t MaterialLayerFillMode = TechniqueFillMode;
            inline std::uintptr_t MaterialLayerMatFlags = TechniqueDepthState;
            inline std::uintptr_t MaterialLayerParam = TechniqueBlendColorMask;
            inline std::uintptr_t MaterialLayerFlags2 = TechniqueBlendColorSource;
            inline std::uintptr_t MaterialLayerColorData = TechniqueBlendAlphaToCoverage;
            inline constexpr std::uint8_t MaterialLayerFillModeSolid = TechniqueFillModeSolid;
            inline constexpr std::uint8_t MaterialLayerFillModeWireframe = TechniqueFillModeWireframe;

            inline std::uintptr_t FceContextPtr = 0x08;
            inline std::uintptr_t FcePrimitiveIndexArrayPtr = 0x80;
            inline std::uintptr_t FceBBoxMin = 0x98;
            inline std::uintptr_t FceBBoxMax = 0xA4;
            inline std::uintptr_t FceContextPrimitivePoolPtr = 0x1A0;
            inline std::uintptr_t FcePrimitivePoolArrayBase = 0x20;
            inline std::uintptr_t FcePrimitiveRecordStride = 48;
            inline std::uintptr_t FcePrimitiveRecordTranslation = 36;
        }

        namespace Verified = Fields;
        namespace Pending = Fields;
    }

    namespace Creator {
        inline constexpr bool Resolved = true;

        // The dump exposes the creator type map as a [start, end) pair.
        // MapStart is the same address as Reflection::CreatorTable.
        inline std::uintptr_t MapStart = 0x85EEAE0;
        inline std::uintptr_t MapEnd = 0x85EEAE8;

        namespace RttiTypeDescriptors {
            inline std::uintptr_t TaskSchedulerJob = 0x7b69f78;
        }

        namespace Confirmed {
            inline std::uintptr_t TaskSchedulerJobCOL = 0x6f5ff60;
            inline std::uintptr_t TaskSchedulerJobVTable = 0x68a9c80;
            inline constexpr std::size_t JobStepVtableIndex = 1;
            inline constexpr std::size_t HeartbeatVtableSlots = 64;
            inline std::uintptr_t CanonicalNameLookup = 0xd65fc0;
            inline std::uintptr_t ClassDescLookup = 0x8ec9b0;
            inline std::uintptr_t SetCreator = 0x8c6240;
            inline std::uintptr_t InstanceSetParent = 0x8b6d70;
        }

        namespace Pending {
            inline constexpr std::size_t JobStepVtableIndex = Confirmed::JobStepVtableIndex;
            inline constexpr std::size_t HeartbeatVtableSlots = Confirmed::HeartbeatVtableSlots;
            inline std::uintptr_t CanonicalNameLookup = Confirmed::CanonicalNameLookup;
            inline std::uintptr_t ClassDescLookup = Confirmed::ClassDescLookup;
            inline std::uintptr_t SetCreator = Confirmed::SetCreator;
            inline std::uintptr_t InstanceSetParent = Confirmed::InstanceSetParent;
        }
    }

    namespace FakeDataModel {
        inline std::uintptr_t Pointer = 0x8B54980;
    }

    namespace FastClusterEntity {
        inline std::uintptr_t VTableRva = 0x6D5CE38;
    }

    namespace FastCluster {
        inline std::uintptr_t VTableRva = 0x6D5BC50;
        inline std::uintptr_t VTableRvaSub = 0x6D5BC70;
    }

    namespace FastClusterBinding {
        inline std::uintptr_t VTableRva = 0x6D5CD60;
    }

    namespace InstancedCluster2 {
        inline std::uintptr_t VTableRva = 0x6D5ACB0;
    }

    namespace SmoothClusterNode {
        inline std::uintptr_t VTableRva = 0x6D5CB98;
    }

    namespace DeviceD3D11Gfx {
        inline std::uintptr_t VTableRva = 0x6CF09B0;
    }

    namespace GeometryD3D11 {
        inline std::uintptr_t VTableRva = 0x6CF1120;
    }

    namespace Fire {
        inline std::uintptr_t FireProximityPrompt = 0x3192070;
    }

    namespace Types {
        inline std::uintptr_t AllTypes = 0x8AEA748;
    }

    namespace Functions {
        inline std::uintptr_t Clone = 0x158D3A0;
        inline std::uintptr_t Destroy = 0x158D3C0;
        inline std::uintptr_t FindPartOnRay = 0xE0FDE0;
        inline std::uintptr_t FindPartOnRayWithIgnoreList = 0xE0FE60;
        inline std::uintptr_t FindPartOnRayWithWhitelist = 0xE0FEF0;
        inline std::uintptr_t FireServer = 0xBD8280;
        inline std::uintptr_t Print = 0x1D2EEB0;
        inline std::uintptr_t RaisePropertyChanged = 0xEC1B36;
        inline std::uintptr_t Raycast = 0xE074B0;
        inline std::uintptr_t SetParent = 0xE01B80;
        inline std::uintptr_t SetParentInternal = 0x1D76F10;
        inline std::uintptr_t Shapecast = 0xE08E70;
    }

    namespace Highlight {
        inline std::uintptr_t InvalidateAdornee = 0x930380;
        inline std::uintptr_t SetAdornee = 0x21758d0;
    }

    namespace Instance {
        inline std::uintptr_t ClassByName = 0x46F6BFE;
        inline std::uintptr_t CreatorFromClass = 0x8ec9b0;
        inline std::uintptr_t FromExisting = 0x417C6B0;
        inline std::uintptr_t New = 0x417B8D0;
        inline std::uintptr_t PushToLua = 0x7c5820;
        inline std::uintptr_t SetParent = 0xE01B80;
        inline std::uintptr_t WhJobVftable = 0x697e748;
    }

    namespace Luau {
        inline std::uintptr_t EmptyNode = 0x610b760;
        inline std::uintptr_t collectgarbage_wrap = 0x2414880;
        inline std::uintptr_t index2addr = 0x937da0;
        inline std::uintptr_t loadstring = 0x411B342;
        inline std::uintptr_t lua_gc = 0x93a040;
        inline std::uintptr_t lua_getglobal = 0x0;
        inline std::uintptr_t lua_pushinteger = 0x938e80;
        inline std::uintptr_t lua_pushlightuserdata = 0x939140;
        inline std::uintptr_t lua_pushnil = 0x9392c0;
        inline std::uintptr_t lua_pushobject = 0x938ef0;
        inline std::uintptr_t lua_pushvalue = 0x937d30;
        inline std::uintptr_t luaC_fullgc = 0x94c250;
        inline std::uintptr_t luaC_step = 0x94bec0;
        inline std::uintptr_t luaC_step_work = 0x94bbf0;
        inline std::uintptr_t luaL_getmetafield = 0x93da80;
        inline std::uintptr_t print_wrap = 0x24165b0;
        inline std::uintptr_t require = 0x24166c0;
        inline std::uintptr_t require_impl = 0x0;
    }

    namespace LuauGlobal {
        inline std::uintptr_t dummynode = 0x610b760;
    }

    namespace Reflection {
        inline std::uintptr_t CreatorTable = 0x85EEAE0;
        inline std::uintptr_t NameRegistry = 0x822C9C0;
        inline std::uintptr_t DescriptorNativeOffset = 0x78;

        namespace Raycast {
            inline std::uintptr_t Descriptor = 0x8217318;
            inline std::uintptr_t Native = 0xECDDF0;
            inline constexpr bool PackedRay = false;
        }

        namespace FindPartOnRay {
            inline std::uintptr_t Descriptor = 0x81e77f0;
            inline std::uintptr_t Native = 0x3bd83f0;
            inline constexpr bool PackedRay = true;
            inline constexpr bool Unresolved = true;
        }

        namespace FindPartOnRayWithIgnoreList {
            inline std::uintptr_t Descriptor = 0x81e78a0;
            inline std::uintptr_t Native = 0x3bd8320;
            inline constexpr bool PackedRay = true;
            inline constexpr bool Unresolved = true;
        }

        namespace FindPartOnRayWithWhitelist {
            inline std::uintptr_t Descriptor = 0x81e7950;
            inline std::uintptr_t Native = 0x3bd8250;
            inline constexpr bool PackedRay = true;
            inline constexpr bool Unresolved = true;
        }

        namespace FindPartOnRayLowercase {
            inline std::uintptr_t Descriptor = 0x81e7cf0;
            inline std::uintptr_t Native = 0x3bd83f0;
            inline constexpr bool PackedRay = true;
            inline constexpr bool Unresolved = true;
        }
    }

    namespace TaskScheduler {
        inline std::uintptr_t Pointer = 0x8AFF2A0;
    }

    namespace VisualEngine {
        inline std::uintptr_t Pointer = 0x858D208;
    }

    namespace WorldRoot {
        inline std::uintptr_t RaycastBoundDesc = 0x830AF80;
    }

    namespace Raycast {
        inline std::uintptr_t RaycastBoundDesc = 0x82C62D0;
        inline std::uintptr_t RaycastBoundFn = 0x80;
    }

    namespace Raycast2 {
        inline std::uintptr_t RaycastBoundDesc = 0x8217310;
    }
}
