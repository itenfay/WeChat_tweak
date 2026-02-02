//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveSensitiveDataItem : NSObject
{
    NSString *_sensitiveText;
}

+ (id)createWithSenstiveText:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *sensitiveText; // @synthesize sensitiveText=_sensitiveText;

@end

