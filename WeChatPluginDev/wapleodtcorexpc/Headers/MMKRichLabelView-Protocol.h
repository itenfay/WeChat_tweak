//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKLabelView-Protocol.h"

@protocol MMKText;

@protocol MMKRichLabelView <MMKLabelView>
- (id <MMKText>)getRichText;
- (void)setRichText:(id <MMKText>)arg1;
@end

