//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSelectedTabViewModel;
@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMSelectedTabViewModelDelegate <NSObject>

@optional
- (void)musicTabVM:(MMBGMSelectedTabViewModel *)arg1 didSelectMusicInfo:(id <MMBGMSelectedMusicDataProtocol>)arg2;
- (void)musicTabVMDataChange:(MMBGMSelectedTabViewModel *)arg1;
@end

