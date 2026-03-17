//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMKCountryCallingCodeViewOnSelectCallback, NSArray, NSString;

@protocol MMKCountryCallingCodeView <MMKView>
- (void)setOnSelectCallback:(MMKCountryCallingCodeViewOnSelectCallback *)arg1;
- (NSString *)getPlaceHolder;
- (void)setPlaceHolder:(NSString *)arg1;
- (_Bool)getHideCode;
- (void)setHideCode:(_Bool)arg1;
- (NSString *)getNationality;
- (void)setNationality:(NSString *)arg1;
- (NSString *)getCountryCode;
- (void)setCountryCode:(NSString *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setNationalityExcludeArray:(NSArray *)arg1;
@end

