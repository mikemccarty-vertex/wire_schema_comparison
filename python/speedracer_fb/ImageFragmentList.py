# automatically generated by the FlatBuffers compiler, do not modify

# namespace: speedracer_fb

import flatbuffers

class ImageFragmentList(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsImageFragmentList(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = ImageFragmentList()
        x.Init(buf, n + offset)
        return x

    # ImageFragmentList
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # ImageFragmentList
    def Frame(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            x = self._tab.Indirect(o + self._tab.Pos)
            from .FrameID import FrameID
            obj = FrameID()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # ImageFragmentList
    def Fragments(self, j):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            x = self._tab.Vector(o)
            x += flatbuffers.number_types.UOffsetTFlags.py_type(j) * 4
            x = self._tab.Indirect(x)
            from .ImageFragmentInfo import ImageFragmentInfo
            obj = ImageFragmentInfo()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # ImageFragmentList
    def FragmentsLength(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            return self._tab.VectorLen(o)
        return 0

    # ImageFragmentList
    def TotalCount(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

    # ImageFragmentList
    def AccumCount(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(10))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.Int32Flags, o + self._tab.Pos)
        return 0

def ImageFragmentListStart(builder): builder.StartObject(4)
def ImageFragmentListAddFrame(builder, frame): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(frame), 0)
def ImageFragmentListAddFragments(builder, fragments): builder.PrependUOffsetTRelativeSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(fragments), 0)
def ImageFragmentListStartFragmentsVector(builder, numElems): return builder.StartVector(4, numElems, 4)
def ImageFragmentListAddTotalCount(builder, totalCount): builder.PrependInt32Slot(2, totalCount, 0)
def ImageFragmentListAddAccumCount(builder, accumCount): builder.PrependInt32Slot(3, accumCount, 0)
def ImageFragmentListEnd(builder): return builder.EndObject()
