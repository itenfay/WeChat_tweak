//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSArray, NSString;

@protocol MMRTCMenuSelectDelegate <NSObject>
- (void)showMenuWithItems:(NSArray *)arg1;
- (void)showSelectMenu;
- (void)selectAllText;
- (void)clearSelectArea;
- (MMUIViewController *)getViewController;
- (struct _NSRange)getSelectContentRange;
- (NSString *)getSelectContent;
@end

