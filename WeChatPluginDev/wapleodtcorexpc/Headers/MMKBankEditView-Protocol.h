//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMDynamicColor, MMITransmitKvData, MMKBankEditViewOnSeletBankCallback, NSString;

@protocol MMKBankEditView <MMKView>
- (void)setOnSeletBankCallback:(MMKBankEditViewOnSeletBankCallback *)arg1;
- (long long)getFontStyle;
- (void)setFontStyle:(long long)arg1;
- (float)getTextSize;
- (void)setTextSize:(float)arg1;
- (MMDynamicColor *)getTextColor;
- (void)setTextColor:(MMDynamicColor *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)openBankSelectView;
- (NSString *)getSelectedBankType;
- (void)setSelected:(NSString *)arg1;
- (void)setData:(MMITransmitKvData *)arg1;
@end

