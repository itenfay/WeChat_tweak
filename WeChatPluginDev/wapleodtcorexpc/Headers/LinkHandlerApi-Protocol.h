//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class LinkLocationJumpInfo, LinkWeAppJumpInfo, NSString;

@protocol LinkHandlerApi
- (void)openLocationLinkWrap:(LinkLocationJumpInfo *)arg1 error:(id *)arg2;
- (void)openWeAppLinkLinkWrap:(LinkWeAppJumpInfo *)arg1 error:(id *)arg2;
- (void)openLinkUrl:(NSString *)arg1 error:(id *)arg2;
@end

