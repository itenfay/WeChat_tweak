//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol TPHeadphoneManagerDelegate;

@protocol ITPHeadphoneManagerImpl <NSObject>
- (void)removeDelegate:(id <TPHeadphoneManagerDelegate>)arg1;
- (void)addDelegate:(id <TPHeadphoneManagerDelegate>)arg1;
@end

