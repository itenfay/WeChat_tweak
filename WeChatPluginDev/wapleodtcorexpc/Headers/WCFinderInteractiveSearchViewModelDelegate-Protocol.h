//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol WCFinderInteractiveSearchViewModelDelegate <NSObject>
- (void)onSearchVMSectionLoadingStateChanged:(id)arg1;
- (void)onSearchVMSecitonChanged:(id)arg1;

@optional
- (void)onSearchVMSectionEmpty;
@end

