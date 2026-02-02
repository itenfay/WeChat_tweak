//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderFollowTabDetailVMDelegate <NSObject>

@optional
- (int)followDetailVMGetCommentScene;
- (void)onFollowTabDetailVMDataDeleteDataAtIndex:(long long)arg1;
- (void)onFollowTabDetailVMDataAppendFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)onFollowTabDetailVMDataChange;
- (void)onFollowTabDetailVMDataEmpty;
@end

