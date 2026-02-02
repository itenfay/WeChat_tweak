//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MMKindaModalManagerInstance : NSObject
{
    NSMutableArray *_modals;
}

+ (id)shared;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *modals; // @synthesize modals=_modals;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShown:(id)arg1;
- (void)dealloc;
- (id)init;

@end

