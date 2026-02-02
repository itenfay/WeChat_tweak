//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandTimelineMsgDBResortItem : NSObject
{
    _Bool _bShowBigPic;
    _Bool _bHasResorted;
    _Bool _isDigestBold;
    _Bool _reduceGroup;
    unsigned int _groupId;
    unsigned int _predict;
    unsigned long long _seqId;
    NSString *_digestInfoJson;
    NSString *_digestStrategyInfo;
    NSString *_recReason;
    NSString *_resortBuffer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *resortBuffer; // @synthesize resortBuffer=_resortBuffer;
@property(copy, nonatomic) NSString *recReason; // @synthesize recReason=_recReason;
@property(nonatomic) _Bool reduceGroup; // @synthesize reduceGroup=_reduceGroup;
@property(retain, nonatomic) NSString *digestStrategyInfo; // @synthesize digestStrategyInfo=_digestStrategyInfo;
@property(retain, nonatomic) NSString *digestInfoJson; // @synthesize digestInfoJson=_digestInfoJson;
@property(nonatomic) _Bool isDigestBold; // @synthesize isDigestBold=_isDigestBold;
@property(nonatomic) _Bool bHasResorted; // @synthesize bHasResorted=_bHasResorted;
@property(nonatomic) _Bool bShowBigPic; // @synthesize bShowBigPic=_bShowBigPic;
@property(nonatomic) unsigned int predict; // @synthesize predict=_predict;
@property(nonatomic) unsigned int groupId; // @synthesize groupId=_groupId;
@property(nonatomic) unsigned long long seqId; // @synthesize seqId=_seqId;
- (id)description;
- (_Bool)isStringIncludeNil:(id)arg1 equalToString:(id)arg2;
- (_Bool)isNeedUpdateResortDigestByDBMsg:(id)arg1;

@end

