//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray;

@protocol SelectAttachmentViewDelegate <NSObject>

@optional
- (void)onAttachmentVisableChange:(_Bool)arg1 currentItems:(NSMutableArray *)arg2;
- (void)onShowAttachmentAtPageIndex:(unsigned long long)arg1 pageSize:(unsigned long long)arg2;
- (void)onShowInputToolWeAppArAtPageIndex:(unsigned long long)arg1 pageNumber:(unsigned long long)arg2;
@end

