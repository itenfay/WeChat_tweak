//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol SessionFinderTopicListExt <NSObject>

@optional
- (void)onFinderTopicListDisappear:(unsigned long long)arg1;
- (void)onFinderTopicListAppear:(unsigned long long)arg1;
- (void)onFinderTopicListQuit:(unsigned long long)arg1 withHashCode:(unsigned long long)arg2;
- (void)onFinderTopicListEnter:(unsigned long long)arg1 withHashCode:(unsigned long long)arg2;
@end

