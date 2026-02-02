//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface RTEEditInfo : NSObject
{
    NSString *_editString;
    struct _NSRange _editeRange;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *editString; // @synthesize editString=_editString;
@property(nonatomic) struct _NSRange editeRange; // @synthesize editeRange=_editeRange;

@end

