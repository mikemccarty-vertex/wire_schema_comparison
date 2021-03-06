# automatically generated by the FlatBuffers compiler, do not modify

# namespace: speedracer_fb

import flatbuffers

class ImageFragmentInfo(object):
    __slots__ = ['_tab']

    @classmethod
    def GetRootAsImageFragmentInfo(cls, buf, offset):
        n = flatbuffers.encode.Get(flatbuffers.packer.uoffset, buf, offset)
        x = ImageFragmentInfo()
        x.Init(buf, n + offset)
        return x

    # ImageFragmentInfo
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # ImageFragmentInfo
    def Key(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(4))
        if o != 0:
            return self._tab.String(o + self._tab.Pos)
        return bytes()

    # ImageFragmentInfo
    def Bounds(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(6))
        if o != 0:
            x = o + self._tab.Pos
            from .BoundingBox2i import BoundingBox2i
            obj = BoundingBox2i()
            obj.Init(self._tab.Bytes, x)
            return obj
        return None

    # ImageFragmentInfo
    def IsOpaque(self):
        o = flatbuffers.number_types.UOffsetTFlags.py_type(self._tab.Offset(8))
        if o != 0:
            return self._tab.Get(flatbuffers.number_types.BoolFlags, o + self._tab.Pos)
        return 0

def ImageFragmentInfoStart(builder): builder.StartObject(3)
def ImageFragmentInfoAddKey(builder, key): builder.PrependUOffsetTRelativeSlot(0, flatbuffers.number_types.UOffsetTFlags.py_type(key), 0)
def ImageFragmentInfoAddBounds(builder, bounds): builder.PrependStructSlot(1, flatbuffers.number_types.UOffsetTFlags.py_type(bounds), 0)
def ImageFragmentInfoAddIsOpaque(builder, isOpaque): builder.PrependBoolSlot(2, isOpaque, 0)
def ImageFragmentInfoEnd(builder): return builder.EndObject()
