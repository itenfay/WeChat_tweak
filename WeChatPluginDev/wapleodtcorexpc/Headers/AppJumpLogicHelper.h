//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AppJumpLogicHelper : NSObject
{
    long long _jumpSource;
}

@property(nonatomic) long long jumpSource; // @synthesize jumpSource=_jumpSource;
- (long long)getJumpFunctionTypeByAppId:(id)arg1;
- (id)getAppIdByFunctionType:(long long)arg1;
- (_Bool)isCanShowSource:(id)arg1;
- (_Bool)isShowAppMessageBottom:(id)arg1;
- (_Bool)isShowTimelineSource:(id)arg1;
- (_Bool)innerJumpByAppId:(id)arg1 chatType:(int)arg2;
- (_Bool)jumpToGameDetailView:(id)arg1 chatType:(int)arg2;
- (_Bool)jumpByAppIdInTimeline:(id)arg1;
- (_Bool)jumpByAppIdInMessage:(id)arg1 chatRoom:(_Bool)arg2;
- (_Bool)isCanJumpWithAppId:(id)arg1;
- (_Bool)isShowTimeLineJumpLink:(id)arg1;

@end

