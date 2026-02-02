//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMEmoticonResExt <NSObject>

@optional
- (void)onEmoticonResDeleteForSubType:(unsigned int)arg1;
- (void)onEmoticonResUpdateForSubType:(unsigned int)arg1 dirPath:(NSString *)arg2;
@end

