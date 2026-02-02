//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AnyPromise, NSString, TextState3rdPartyContext, UIView, UIViewController;
@protocol TextStateBaseMediaView;

@protocol TextState3rdPartyHandler <NSObject>
@property(readonly, nonatomic) _Bool useCoverForContent;
@property(readonly, nonatomic) _Bool preferCustomView;
@property(retain, nonatomic) TextState3rdPartyContext *context;
@property(readonly, nonatomic) unsigned int type;
- (NSString *)reportActivityId;
- (_Bool)doHeadImageActionWithViewController:(UIViewController *)arg1;
- (_Bool)doSourceActionWithViewController:(UIViewController *)arg1 scene:(unsigned int)arg2;
- (NSString *)name;
- (UIView *)customView;
- (UIView *)headImageView;
- (NSString *)title;
- (id)initWithBuffer:(NSString *)arg1 keyBuffer:(NSString *)arg2;
- (_Bool)supportCustomCover;
- (_Bool)supportCustomMedia;

@optional
- (_Bool)dataReady;
- (AnyPromise *)updateBizData;
- (_Bool)needUpdateBizData;
- (_Bool)isHybrid;
- (void)getSourceInfoForReferWithCompletionBlock:(void (^)(TextStatePublishSourceInfo *))arg1;
- (_Bool)canGetSourceInfoForRefer;
- (_Bool)isValid;
- (void)checkValidWithCompletionBlock:(void (^)(_Bool))arg1 cacheOnly:(_Bool)arg2;
- (NSString *)mediaDescription;
- (_Bool)autoHandleAppLifeCycleEvent;
- (_Bool)allowReferBackground;
- (UIView *)mediaCoverView;
- (UIView<TextStateBaseMediaView> *)mediaContentView;
@end

