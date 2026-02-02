//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol SelectAttachmentViewDataSource <NSObject>

@optional
- (double)getRealSafeBottomInset;
- (long long)getInputToolWeAppNotShowIndex;
- (double)getSelectAttachmentViewHeight;
- (NSString *)getDescAtIndex:(unsigned int)arg1;
- (UIView *)viewForAttachmentAtIndex:(unsigned int)arg1;
- (unsigned long long)numberOfCols;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfAttachment;
@end

