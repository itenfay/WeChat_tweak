//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface GCTableViewSecionModel : NSObject
{
    NSMutableArray *_dataArray;
    NSString *_reuseIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;

@end

