//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface HeMetadataModel : NSObject
{
    long long _Version;
    NSString *_Created;
    NSString *_Description;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *Description; // @synthesize Description=_Description;
@property(copy, nonatomic) NSString *Created; // @synthesize Created=_Created;
@property(nonatomic) long long Version; // @synthesize Version=_Version;

@end

