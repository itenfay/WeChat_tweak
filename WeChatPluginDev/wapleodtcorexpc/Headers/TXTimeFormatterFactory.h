//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface TXTimeFormatterFactory : NSObject
{
    NSDateFormatter *_dateFormatter;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (id)getDateFormatter;
- (id)init;

@end

