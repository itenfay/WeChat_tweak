//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIButton, NSString;

@interface WCButtonListButtonItem
{
    NSString *_key;
    MMUIButton *_button;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) MMUIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;

@end

