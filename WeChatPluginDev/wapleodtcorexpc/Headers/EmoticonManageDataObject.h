//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CEmoticonIPSetInfo, CEmoticonPackageWrap;

@interface EmoticonManageDataObject : NSObject
{
    unsigned long long _type;
    CEmoticonPackageWrap *_pageWrap;
    CEmoticonIPSetInfo *_setInfo;
    unsigned long long _packedEmoticonCount;
    unsigned long long _objPosition;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long objPosition; // @synthesize objPosition=_objPosition;
@property(nonatomic) unsigned long long packedEmoticonCount; // @synthesize packedEmoticonCount=_packedEmoticonCount;
@property(retain, nonatomic) CEmoticonIPSetInfo *setInfo; // @synthesize setInfo=_setInfo;
@property(retain, nonatomic) CEmoticonPackageWrap *pageWrap; // @synthesize pageWrap=_pageWrap;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)keyForOrder;
- (id)pageWrapForMoving;

@end

