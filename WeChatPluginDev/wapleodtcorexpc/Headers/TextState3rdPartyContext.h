//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TextStateJumpElement, TextStateModel;

@interface TextState3rdPartyContext : NSObject
{
    TextStateModel *_textState;
    TextStateJumpElement *_jumpElement;
}

- (void).cxx_destruct;
@property(nonatomic) __weak TextStateJumpElement *jumpElement; // @synthesize jumpElement=_jumpElement;
@property(nonatomic) __weak TextStateModel *textState; // @synthesize textState=_textState;

@end

