//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMCommonPickerItem : NSObject
{
    NSString *_displayStr;
    id _userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *displayStr; // @synthesize displayStr=_displayStr;
- (id)initWithDisplayStr:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

