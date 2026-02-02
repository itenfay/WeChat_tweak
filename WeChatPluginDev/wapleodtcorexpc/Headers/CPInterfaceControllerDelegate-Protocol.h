//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CPTemplate;

@protocol CPInterfaceControllerDelegate <NSObject>

@optional
- (void)templateDidDisappear:(CPTemplate *)arg1 animated:(_Bool)arg2;
- (void)templateWillDisappear:(CPTemplate *)arg1 animated:(_Bool)arg2;
- (void)templateDidAppear:(CPTemplate *)arg1 animated:(_Bool)arg2;
- (void)templateWillAppear:(CPTemplate *)arg1 animated:(_Bool)arg2;
@end

