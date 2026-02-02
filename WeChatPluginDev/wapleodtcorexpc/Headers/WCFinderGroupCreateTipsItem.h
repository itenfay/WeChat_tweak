//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderGroupCreateTipsItem : NSObject
{
    NSString *_titleName;
    NSString *_desc;
}

+ (id)createTipsItemWithTitle:(id)arg1 desc:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;

@end

