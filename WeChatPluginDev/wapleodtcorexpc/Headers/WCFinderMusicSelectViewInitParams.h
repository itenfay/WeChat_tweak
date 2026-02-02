//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderMusicSelectViewInitParams : NSObject
{
    _Bool _ostBtnDefaultOn;
    NSString *_ostBtnTitle;
    unsigned long long _btnOption;
}

+ (id)defaultParams;
- (void).cxx_destruct;
@property(nonatomic) _Bool ostBtnDefaultOn; // @synthesize ostBtnDefaultOn=_ostBtnDefaultOn;
@property(nonatomic) unsigned long long btnOption; // @synthesize btnOption=_btnOption;
@property(copy, nonatomic) NSString *ostBtnTitle; // @synthesize ostBtnTitle=_ostBtnTitle;

@end

