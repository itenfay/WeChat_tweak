//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SnsPostLaunchRequest : NSObject
{
    NSString *_username;
    NSString *_localId;
}

+ (id)nullableFromList:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)makeWithUsername:(id)arg1 localId:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toList;

@end

