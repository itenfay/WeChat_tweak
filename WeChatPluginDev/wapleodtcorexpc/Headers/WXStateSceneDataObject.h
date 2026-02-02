//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WXStateJumpInfo;

@interface WXStateSceneDataObject
{
    NSString *_stateId;
    NSString *_stateTitle;
    NSString *_token;
    unsigned long long _jumpType;
    WXStateJumpInfo *_stateJumpDataInfo;
}

+ (id)object;
- (void).cxx_destruct;
@property(retain, nonatomic) WXStateJumpInfo *stateJumpDataInfo; // @synthesize stateJumpDataInfo=_stateJumpDataInfo;
@property(nonatomic) unsigned long long jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *stateTitle; // @synthesize stateTitle=_stateTitle;
@property(copy, nonatomic) NSString *stateId; // @synthesize stateId=_stateId;

@end

