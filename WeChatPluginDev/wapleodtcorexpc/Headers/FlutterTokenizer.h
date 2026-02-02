//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextInputStringTokenizer.h>

@class FlutterTextInputView;

@interface FlutterTokenizer : UITextInputStringTokenizer
{
    FlutterTextInputView *_textInputView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak FlutterTextInputView *textInputView; // @synthesize textInputView=_textInputView;
- (id)lineEnclosingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (id)initWithTextInput:(id)arg1;

@end

