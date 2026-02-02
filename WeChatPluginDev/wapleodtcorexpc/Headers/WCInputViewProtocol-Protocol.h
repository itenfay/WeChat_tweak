//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCCommonInputViewDelegate;

@protocol WCInputViewProtocol <NSObject>
@property(nonatomic) __weak id <WCCommonInputViewDelegate> delegate;
- (void)setInputMode:(unsigned long long)arg1;
@end

