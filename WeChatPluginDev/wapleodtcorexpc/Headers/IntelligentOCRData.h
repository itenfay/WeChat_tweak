//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class IntelligentOCRItem;

@interface IntelligentOCRData
{
    unsigned int _ocrTime;
    IntelligentOCRItem *_ocrItem;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int ocrTime; // @synthesize ocrTime=_ocrTime;
@property(retain, nonatomic) IntelligentOCRItem *ocrItem; // @synthesize ocrItem=_ocrItem;

@end

