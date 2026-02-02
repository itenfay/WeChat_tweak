//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJStyleEditView, NSError, NSString;

@protocol MJStyleEditViewDelegate <NSObject>

@optional
- (void)styleEditView:(MJStyleEditView *)arg1 needReloadData:(unsigned long long)arg2;
- (long long)selectedIndexWithStyleEditView:(MJStyleEditView *)arg1 dataType:(unsigned long long)arg2;
- (void)styleEditView:(MJStyleEditView *)arg1 dataType:(unsigned long long)arg2 didLoadedStyleAtIndex:(long long)arg3 materialID:(NSString *)arg4 error:(NSError *)arg5;
- (void)styleEditView:(MJStyleEditView *)arg1 dataType:(unsigned long long)arg2 didSelectedStyleAtIndex:(long long)arg3;
@end

