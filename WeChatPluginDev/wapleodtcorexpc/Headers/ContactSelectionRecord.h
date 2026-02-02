//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface ContactSelectionRecord : NSObject
{
    NSString *_username;
    long long _source;
    long long _operation;
}

- (void).cxx_destruct;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

