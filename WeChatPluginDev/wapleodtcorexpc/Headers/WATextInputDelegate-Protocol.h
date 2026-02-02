//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol WATextInputInterface;

@protocol WATextInputDelegate <NSObject>
- (void)didHeightChange:(double)arg1 lineNum:(long long)arg2 input:(id <WATextInputInterface>)arg3;
- (void)didValueChange:(NSString *)arg1 pos:(long long)arg2 input:(id <WATextInputInterface>)arg3 keyCode:(unsigned short)arg4;
- (void)onCaretBreak;
- (_Bool)onReturn:(id <WATextInputInterface>)arg1;
- (void)onFocus:(id <WATextInputInterface>)arg1;

@optional
- (void)onScrollViewDidEndScroll:(id <WATextInputInterface>)arg1;
- (void)onScrollViewWillBeginDragging:(id <WATextInputInterface>)arg1;
- (void)onSelectDrop:(NSString *)arg1 input:(id <WATextInputInterface>)arg2;
- (void)onDeleteDrop:(NSString *)arg1 input:(id <WATextInputInterface>)arg2;
@end

