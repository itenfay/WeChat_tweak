//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NewCustomizationGiftCommitResult : NSObject
{
    _Bool _success;
    _Bool _hasCustomized;
    _Bool _hasAntispamCustomText;
    NSString *_antispamCustomText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAntispamCustomText; // @synthesize hasAntispamCustomText=_hasAntispamCustomText;
@property(nonatomic) _Bool hasCustomized; // @synthesize hasCustomized=_hasCustomized;
@property(retain, nonatomic) NSString *antispamCustomText; // @synthesize antispamCustomText=_antispamCustomText;
@property(nonatomic) _Bool success; // @synthesize success=_success;

@end

