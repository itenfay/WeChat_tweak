//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BrandTLExptConfig, CMessageWrap;

@protocol BrandTLViewControllerProtocol <NSObject>
@property(nonatomic) unsigned int enterSessionInfoNotifyType;
@property(retain, nonatomic) CMessageWrap *enterMsgInMainFrameSession;
@property(nonatomic) unsigned int redDotCount;
@property(nonatomic) _Bool isShowRedDotInMainFrameSession;
@property(nonatomic) unsigned long long enterRowIndexInMainFrameSession;
@property(nonatomic) unsigned long long source;
@property(retain, nonatomic) BrandTLExptConfig *exptConfig;
- (id)initWithExptConfig:(BrandTLExptConfig *)arg1;
@end

