//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface NSNotificationToken : NSObject
{
    id _object;
    NSString *_name;
    id _token;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;

@end

