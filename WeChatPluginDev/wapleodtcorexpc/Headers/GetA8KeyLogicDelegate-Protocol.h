//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class GetA8KeyResp, NSDictionary, NSMutableDictionary, NSString, NSURL, OpenIMContactSearchContext;

@protocol GetA8KeyLogicDelegate <NSObject>

@optional
- (void)onGetWeWorkKFInfo:(NSString *)arg1;
- (unsigned long long)getSourceType;
- (OpenIMContactSearchContext *)sourceOpenIMContext;
- (NSString *)sourceWeAppAppid;
- (void)onPresentToOtherVC;
- (void)onNeedStartScan;
- (NSMutableDictionary *)onGetA8KeyWillOpenFinder;
- (void)onGetA8KeyWillOpenWeApp:(NSDictionary *)arg1;
- (void)onGetA8KeyOneClickLoginWithURL:(NSURL *)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onGetProductInfoHandleEnd;
- (void)onGetProductInfoEnd;
- (void)onGetProductInfoStart;
- (void)onSearchContactHandleEnd;
- (void)onSearchContactGetResult;
- (void)onSearchContactFail;
- (void)onSearchContactEnd;
- (void)onSearchContactStart;
- (void)onGetA8KeyFail;
- (void)onGetA8KeyEnd;
- (void)onGetA8KeyResult:(GetA8KeyResp *)arg1;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (void)onGetA8KeyStart;
@end

