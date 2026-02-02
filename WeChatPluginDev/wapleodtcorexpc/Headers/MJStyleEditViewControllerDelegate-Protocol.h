//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJStyleEditViewController, NSString;

@protocol MJStyleEditViewControllerDelegate <NSObject>

@optional
- (void)didDoneWithStyleEditVC:(MJStyleEditViewController *)arg1;
- (void)styleEditVC:(MJStyleEditViewController *)arg1 didCancelWithBackupStyles:(NSString *)arg2 font:(NSString *)arg3 color:(NSString *)arg4 anim:(NSString *)arg5 needBackup:(_Bool)arg6;
- (void)styleEditVC:(MJStyleEditViewController *)arg1 didEndChangeMaterialWitDataType:(unsigned long long)arg2;
- (void)styleEditVC:(MJStyleEditViewController *)arg1 didSelectAnimPreset:(NSString *)arg2;
- (void)styleEditVC:(MJStyleEditViewController *)arg1 didSelectedFont:(NSString *)arg2;
- (void)styleEditVC:(MJStyleEditViewController *)arg1 didSelectedColor:(NSString *)arg2;
- (void)styleEditVC:(MJStyleEditViewController *)arg1 didSelectedMaterial:(NSString *)arg2;
@end

