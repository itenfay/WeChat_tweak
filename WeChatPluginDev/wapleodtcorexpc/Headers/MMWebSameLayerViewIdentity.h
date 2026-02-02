//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MMWebSameLayerViewIdentity : NSObject
{
    NSDictionary *m_dict;
}

- (void).cxx_destruct;
- (id)description;
- (double)maxDiff;
- (struct CGRect)targetFrame;
- (_Bool)isSameView:(struct CGRect)arg1;
- (unsigned int)viewId;
- (_Bool)checkData;
- (id)initWithDict:(id)arg1;

@end

