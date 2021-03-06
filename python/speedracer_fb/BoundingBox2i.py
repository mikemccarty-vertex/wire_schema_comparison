# automatically generated by the FlatBuffers compiler, do not modify

# namespace: speedracer_fb

import flatbuffers

class BoundingBox2i(object):
    __slots__ = ['_tab']

    # BoundingBox2i
    def Init(self, buf, pos):
        self._tab = flatbuffers.table.Table(buf, pos)

    # BoundingBox2i
    def Xmin(self): return self._tab.Get(flatbuffers.number_types.Int32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(0))
    # BoundingBox2i
    def Xmax(self): return self._tab.Get(flatbuffers.number_types.Int32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(4))
    # BoundingBox2i
    def Ymin(self): return self._tab.Get(flatbuffers.number_types.Int32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(8))
    # BoundingBox2i
    def Ymax(self): return self._tab.Get(flatbuffers.number_types.Int32Flags, self._tab.Pos + flatbuffers.number_types.UOffsetTFlags.py_type(12))

def CreateBoundingBox2i(builder, xmin, xmax, ymin, ymax):
    builder.Prep(4, 16)
    builder.PrependInt32(ymax)
    builder.PrependInt32(ymin)
    builder.PrependInt32(xmax)
    builder.PrependInt32(xmin)
    return builder.Offset()
