//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderTitleDescButtonActionSheetConfig : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_acceptContent;
    NSString *_cancelContent;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cancelContent; // @synthesize cancelContent=_cancelContent;
@property(copy, nonatomic) NSString *acceptContent; // @synthesize acceptContent=_acceptContent;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

