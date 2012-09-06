//
//  Formulario.h
//  TesteCoreData3
//
//  Created by Luiz Brandão on 22/02/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Contatos.h"
#import "ContatoListController.h"

@interface Formulario : UIViewController
{
    Contatos *contatoAtual;
	ContatoListController *viewParent;
    
	NSManagedObjectContext *managedObjectContext;
    
	IBOutlet UITextField *txtNome;
	IBOutlet UITextField *txtIdade;
	IBOutlet UIButton *btnSave;
	IBOutlet UIButton *btnCancelar;
	IBOutlet UIButton *btnExcluir;
}
@property (nonatomic, retain) Contatos *contatoAtual;
@property (nonatomic, retain) ContatoListController *viewParent;

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@property (nonatomic, retain) IBOutlet UITextField *txtNome;
@property (nonatomic, retain) IBOutlet UITextField *txtIdade;
@property (nonatomic, retain) IBOutlet UIButton *btnSave;
@property (nonatomic, retain) IBOutlet UIButton *btnExcluir;

-(IBAction)doSave:(id)sender;
-(IBAction)doCancel:(id)sender;
-(IBAction)doDelete:(id)sender;

@end
