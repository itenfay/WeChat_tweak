//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMITransmitKvData, MMKProfessionEditViewOnSelectProfessionCallback, NSString;

@protocol MMKProfessionEditView <MMKView>
- (void)setOnSelectProfessionCallback:(MMKProfessionEditViewOnSelectProfessionCallback *)arg1;
- (_Bool)getFocus;
- (void)setFocus:(_Bool)arg1;
- (void)setDefaultProfession:(int)arg1 name:(NSString *)arg2;
- (int)getProfessionType;
- (NSString *)getProfessionName;
- (void)setData:(MMITransmitKvData *)arg1;
@end

