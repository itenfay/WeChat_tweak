//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSnsABTestTitle : NSObject
{
    NSString *showTitleFormat;
    _Bool hasUserNameKey;
    _Bool hasSexKey;
    NSString *maleKey;
    NSString *femailKey;
    NSString *defaultSexKey;
    NSString *richTextKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *richTextKey; // @synthesize richTextKey;
- (_Bool)tryParseTitleFormat:(id)arg1;
- (_Bool)parseTitleFormat:(id)arg1 priorTitleFormat:(id)arg2;
- (id)description;
- (id)init;

@end

