//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCDataItem;

@interface WCPattern : NSObject
{
    WCDataItem *dataItem;
    double lastAccessTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastAccessTime; // @synthesize lastAccessTime;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

