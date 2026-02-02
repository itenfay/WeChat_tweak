//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPIPRenderObj : NSObject
{
    _Bool _isInForeground;
    _Bool _isRootViewAppear;
    NSString *_renderId;
    NSString *_businessName;
    long long _type;
    struct CGRect _normalizedFrame;
}

+ (id)createPIPBusinessAttachId:(id)arg1;
+ (id)createPIPBusinessId:(id)arg1 withBusinessName:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isRootViewAppear; // @synthesize isRootViewAppear=_isRootViewAppear;
@property(nonatomic) _Bool isInForeground; // @synthesize isInForeground=_isInForeground;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
@property(copy, nonatomic) NSString *renderId; // @synthesize renderId=_renderId;
- (void)onRootViewWillDisAppear;
- (void)onRootViewDidAppear;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (_Bool)isNormalizedValid;
- (_Bool)isNormalizedComplete;

@end

