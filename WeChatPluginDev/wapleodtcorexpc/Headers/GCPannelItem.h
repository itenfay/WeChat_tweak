//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GCPannelItem : NSObject
{
    NSString *_iconImage;
    NSString *_title;
    CDUnknownBlockType _didSelectBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *iconImage; // @synthesize iconImage=_iconImage;

@end

