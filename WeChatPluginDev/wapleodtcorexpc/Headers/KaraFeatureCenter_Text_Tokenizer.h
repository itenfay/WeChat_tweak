//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface KaraFeatureCenter_Text_Tokenizer : NSObject
{
    struct shared_ptr<Kara::FeatureCenter::Text::FullTokenizer> _tokenizer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tokenize:(id)arg1 maxLength:(long long)arg2;
- (id)initWithVacabulary:(id)arg1;

@end

